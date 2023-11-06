//
//  RNMeditationSmoothTheSoul.h
//  RNMeditationToSmoothSoul
//
//  Created by Clieny on 11/3/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNMeditationSmoothTheSoul : UIResponder

+ (instancetype)mtss_shared;
- (UIViewController *)mtss_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
