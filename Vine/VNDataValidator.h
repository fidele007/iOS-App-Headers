/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:10 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNDataValidator : NSObject {
	NSDataDetector* _phoneNumberDetector; 
}
+(id)sharedInstance;
-(BOOL)isValidEmail:(id)arg1;
-(BOOL)isValidUsername:(id)arg1;
-(BOOL)isValidPassword:(id)arg1;
-(BOOL)isValidPhoneNumber:(id)arg1;
-(id)init;
-(void).cxx_destruct;
@end