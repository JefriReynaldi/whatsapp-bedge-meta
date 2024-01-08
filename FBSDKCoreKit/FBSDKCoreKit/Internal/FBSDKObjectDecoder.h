/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "FBSDKObjectDecoding.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ObjectDecoder)
@interface FBSDKObjectDecoder : NSObject <FBSDKObjectDecoding>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWith:(NSKeyedUnarchiver *)unarchiver;

@end

NS_ASSUME_NONNULL_END
