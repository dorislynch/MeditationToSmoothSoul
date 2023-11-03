//
//  RNMeditationSmoothTheSoul.h
//  RNMeditationToSmoothSoul
//
//  Created by Klay on 11/3/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNMeditationSmoothTheSoul : UIResponder

+ (instancetype)sts_shared;
- (UIViewController *)sts_followRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
