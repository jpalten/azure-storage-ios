//
//  azure_storage_ios.h
//  azure-storage-ios
//
//  Created by Jelle Alten on 07/02/2019.
//  Copyright © 2019 framework. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for azure_storage_ios.
FOUNDATION_EXPORT double azure_storage_iosVersionNumber;

//! Project version string for azure_storage_ios.
FOUNDATION_EXPORT const unsigned char azure_storage_iosVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <azure_storage_ios/PublicHeader.h>

#include "AZSCloudStorageAccount.h"
#include "AZSCloudBlobClient.h"
#include "AZSCloudBlobContainer.h"
#include "AZSEnums.h"
#include "AZSCloudBlockBlob.h"

#import <libxml/xmlwriter.h>
