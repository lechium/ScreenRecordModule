/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSMModule.h>
#import <TVSystemMenuUI/TVSMModuleContentViewControllerDelegate.h>

//i just made this up, but it accurately tracks the style

typedef NS_ENUM(NSInteger, TVSMActionButtonStyle) {
    TVSMActionButtonStyleSmall = 0,
    TVSMActionButtonStyleMedium,
    TVSMActionButtonStyleLarge
};

@protocol TVSMModuleContentViewController, TVSMModuleDelegate;
@class NSArray, TVSMButtonViewController, NSString, UIImage, NSBundle;

@interface TVSMActionModule : NSObject {
    
}

@property (nonatomic,readonly) NSBundle * bundle;
@property (nonatomic,copy,readonly) NSString * displayName;
@property (nonatomic,readonly) UIImage * icon;
@property (nonatomic,readonly) NSString * iconSymbolName;
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) UIViewController* contentViewController;
@property (nonatomic,readonly) UIViewController* expandedContentViewController;
@property (nonatomic,readonly) NSArray * childModules; 
+(long long)buttonStyle;
-(id)init;
-(long long)type;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)handleAction;
-(BOOL)dismissAfterAction;
-(void)contentModuleViewControllerDidTriggerAction:(id)arg1 ;
@end

