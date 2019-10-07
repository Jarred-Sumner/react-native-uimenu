//
//  ContextMenu.h
//  reactnativeuimenu
//
//  Created by Matthew Iannucci on 10/6/19.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>

@interface ContextMenuView : UIView<UIContextMenuInteractionDelegate>

@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;

@end
