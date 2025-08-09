# plugin_template
After running into the same bug 7th freaking times I have decided to use this working template implementation for ros2 pluginlib, this will be used as a reference in the future to develop plugins without riding into bugs.

- `package_a`: The package that contains the base implementation for the plugin
- `package_b`: The package contains the actual implementation for a plugin
- `package_c`: The package that calls the plugin from `package_b`

`pacakge_b` and `package_c` depend on `package_a`, and there is no other dependency present anywhere

