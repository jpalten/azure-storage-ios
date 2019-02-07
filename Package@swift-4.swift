
import PackageDescription

let package = Package(
    name: "AzureStorage",
    products: [
        .library(
            name: "AzureStorage",
            targets: ["AzureStorage"])
    ],
    targets: [
        .target(
            name: "AzureStorage",
            path: "Source")
    ],
    swiftLanguageVersions: [3, 4]
)
