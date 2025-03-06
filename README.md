# PoilabsSdkAnalytics

Swift Package Manager support for PoilabsSdkAnalytics.

## Requirements
- iOS 12.0+
- Xcode 12.0+
- Swift 5.3+

## Installation

### Swift Package Manager

1. Open your project in Xcode
2. Click File > Add Packages...
3. Paste the following URL into the search bar:
```
https://github.com/poiteam/ios-sdk-analytics-pod.git
```
4. Set Version: Up to Next Major to `1.0.13`
5. Click Add Package

### CocoaPods
```ruby
pod 'PoilabsSdkAnalytics', '~> 1.0.13'
```

## Usage

```swift
import PoilabsSdkAnalytics

// Initialize your analytics system
PoilabsAnalyticsManager.shared.initialize(...)
```

## License
Proprietary - All rights reserved. 