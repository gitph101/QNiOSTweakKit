//
//  AppDelegate.h
//  SouFunManagerXcode
//
//  Created by 研究院01 on 17/1/4.
//  Copyright © 2017年 研究院01. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

