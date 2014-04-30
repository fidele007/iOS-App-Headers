/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:49 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LogCenter : NSObject {
	NSString* _anonymousToken; 
}
+(void)setDefaultCenter:(id)arg1;
+(id)defaultCenter;
-(void)logClientEventWithSource:(id)arg1 context:(id)arg2 eventName:(id)arg3 eventVersion:(id)arg4 testVersion:(id)arg5 data:(id)arg6;
-(void)beginAnonymousTracking;
-(void)logViewWithURI:(id)arg1 duration:(double)arg2;
-(void)logBrowseLink:(id)arg1 source:(id)arg2;
-(void)logAbnormalExitWithUUID:(id)arg1 timestamp:(long long)arg2;
-(BOOL)isAnonymousTrackingEnabled;
-(void)endAnonymousTracking;
-(void)selectedSearchResultRow:(int)arg1 type:(id)arg2;
-(void)logEvent:(id)arg1 item:(id)arg2;
-(void)logEvent:(id)arg1 source:(id)arg2 context:(id)arg3 userInfo:(id)arg4;
-(void)logPickerDidAppearWithDeviceCount:(unsigned)arg1;
-(void)logPickerDidDisappearWithDeviceCount:(unsigned)arg1;
-(void)logDidPickDevice:(id)arg1;
-(void)logDidPickDeviceFailed;
-(void).cxx_destruct;
@end