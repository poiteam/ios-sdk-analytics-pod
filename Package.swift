// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PoilabsSdkAnalytics",
    platforms: [
        .iOS(.v11)
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