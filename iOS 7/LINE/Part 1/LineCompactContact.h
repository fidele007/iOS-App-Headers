/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:19 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineCompactContact : NSObject {
	NSString* __mid; 
	long long __createdTime; 
	long long __modifiedTime; 
	int __status; 
	long long __settings; 
	NSString* __displayNameOverridden; 
	struct {
		unsigned int createdTime:1;
		unsigned int modifiedTime:1;
		unsigned int status:1;
		unsigned int settings:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (assign,nonatomic) long long createdTime; 				//@synthesize _createdTime=__createdTime - In the implementation block
@property (assign,nonatomic) long long modifiedTime; 				//@synthesize _modifiedTime=__modifiedTime - In the implementation block
@property (assign,nonatomic) int status; 				//@synthesize _status=__status - In the implementation block
@property (assign,nonatomic) long long settings; 				//@synthesize _settings=__settings - In the implementation block
@property (nonatomic,retain) NSString* displayNameOverridden; 				//@synthesize _displayNameOverridden=__displayNameOverridden - In the implementation block
-(void)setMid:(id)arg1;
-(void)read:(id)arg1;
-(void)setCreatedTime:(long long)arg1;
-(void)setDisplayNameOverridden:(id)arg1;
-(void)setModifiedTime:(long long)arg1;
-(void)setSettings:(long long)arg1;
-(void)setStatus:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end