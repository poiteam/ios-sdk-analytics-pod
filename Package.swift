// swift-tools-version:5.3
// PoilabsSdkAnalytics - iOS SDK Analytics Package
import PackageDescription

let package = Package(
    name: "PoilabsSdkAnalytics",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PoilabsSdkAnalytics",
            targets: ["PoilabsSdkAnalytics"])
    ],
    targets: [
        .binaryTarget(
            name: "PoilabsSdkAnalytics",
            path: "PoilabsSdkAnalytics.xcframework"
        )
    ]
) 