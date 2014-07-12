Pebble.addEventListener("showConfiguration", function(e) {
  console.log("Showing configuration");
  var config = localStorage.config;
  console.log(encodeURIComponent(config));
  Pebble.openURL("http://satragno.com/dota2timer/config.html?data=" + encodeURIComponent(config));
});

Pebble.addEventListener("webviewclosed", function(e) {
  var config = JSON.parse(decodeURIComponent(e.response));
  console.log("Returned from config");
  if (config.isCancel) {
    console.log("Cancelled configuration");
    return;
  }
  console.log("Sending message to the app: " + JSON.stringify(config));
  Pebble.sendAppMessage(config);
  console.log("Sent");
  localStorage.config = JSON.stringify(config);
});

Pebble.addEventListener("ready", function(e) {
  console.log("Launching app");
  if (localStorage.config != undefined) {
    console.log("Sending message to the app: " + localStorage.config);
    Pebble.sendAppMessage(JSON.parse(localStorage.config));
    console.log("Message sent");
  } else {
    console.log("No config to send, resetting config");
    localStorage.config = JSON.stringify({
        alert53: false,
        alert_courier: false
    });
  }
});