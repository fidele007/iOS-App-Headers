/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:57 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineSnsIdUserStatus : NSObject {
	BOOL __userExisting; 
	BOOL __phoneNumberRegistered; 
	BOOL __sameDevice; 
	int __accountMigrationCheckType; 
	struct {
		unsigned int userExisting:1;
		unsigned int phoneNumberRegistered:1;
		unsigned int sameDevice:1;
		unsigned int accountMigrationCheckType:1;
	} __isSet; 
}
@property (assign,getter=isUserExisting,nonatomic) BOOL userExisting; 				//@synthesize _userExisting=__userExisting - In the implementation block
@property (assign,getter=isPhoneNumberRegistered,nonatomic) BOOL phoneNumberRegistered; 				//@synthesize _phoneNumberRegistered=__phoneNumberRegistered - In the implementation block
@property (assign,getter=isSameDevice,nonatomic) BOOL sameDevice; 				//@synthesize _sameDevice=__sameDevice - In the implementation block
@property (assign,nonatomic) int accountMigrationCheckType; 				//@synthesize _accountMigrationCheckType=__accountMigrationCheckType - In the implementation block
-(void)read:(id)arg1;
-(void)setAccountMigrationCheckType:(int)arg1;
-(void)setUserExisting:(BOOL)arg1;
-(void)setPhoneNumberRegistered:(BOOL)arg1;
-(void)setSameDevice:(BOOL)arg1;
-(void)write:(id)arg1;
@end