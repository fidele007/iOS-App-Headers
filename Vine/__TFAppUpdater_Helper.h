/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:31 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface __TFAppUpdater_Helper : NSObject <UIAlertViewDelegate> {
	NSString* _message; 
	NSDictionary* _info; 
	UIAlertView* _alert; 
}
@property (assign,nonatomic) UIAlertView* alert; 				//@synthesize alert=_alert - In the implementation block
@property (nonatomic,copy) NSDictionary* info; 				//@synthesize info=_info - In the implementation block
-(void)orientationChange:(id)arg1;
-(void)fixMessageForOrientation:(int)arg1;
-(void)dismissAlert;
-(void)setAlert:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)willPresentAlertView:(id)arg1;
-(void)setInfo:(id)arg1;
-(void).cxx_destruct;
@end