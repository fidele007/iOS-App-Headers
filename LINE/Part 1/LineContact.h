/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineContact : NSObject {
	NSString* __mid; 
	long long __createdTime; 
	int __type; 
	int __status; 
	int __relation; 
	NSString* __displayName; 
	NSString* __phoneticName; 
	NSString* __pictureStatus; 
	NSString* __thumbnailUrl; 
	NSString* __statusMessage; 
	NSString* __displayNameOverridden; 
	long long __favoriteTime; 
	BOOL __capableVoiceCall; 
	BOOL __capableVideoCall; 
	BOOL __capableMyhome; 
	BOOL __capableBuddy; 
	int __attributes; 
	long long __settings; 
	NSString* __picturePath; 
	NSString* __recommendParams; 
	int __friendRequestStatus; 
	struct {
		unsigned int createdTime:1;
		unsigned int type:1;
		unsigned int status:1;
		unsigned int relation:1;
		unsigned int favoriteTime:1;
		unsigned int capableVoiceCall:1;
		unsigned int capableVideoCall:1;
		unsigned int capableMyhome:1;
		unsigned int capableBuddy:1;
		unsigned int attributes:1;
		unsigned int settings:1;
		unsigned int friendRequestStatus:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (assign,nonatomic) long long createdTime; 				//@synthesize _createdTime=__createdTime - In the implementation block
@property (assign,nonatomic) int type; 				//@synthesize _type=__type - In the implementation block
@property (assign,nonatomic) int status; 				//@synthesize _status=__status - In the implementation block
@property (assign,nonatomic) int relation; 				//@synthesize _relation=__relation - In the implementation block
@property (nonatomic,retain) NSString* displayName; 				//@synthesize _displayName=__displayName - In the implementation block
@property (nonatomic,retain) NSString* phoneticName; 				//@synthesize _phoneticName=__phoneticName - In the implementation block
@property (nonatomic,retain) NSString* pictureStatus; 				//@synthesize _pictureStatus=__pictureStatus - In the implementation block
@property (nonatomic,retain) NSString* thumbnailUrl; 				//@synthesize _thumbnailUrl=__thumbnailUrl - In the implementation block
@property (nonatomic,retain) NSString* statusMessage; 				//@synthesize _statusMessage=__statusMessage - In the implementation block
@property (nonatomic,retain) NSString* displayNameOverridden; 				//@synthesize _displayNameOverridden=__displayNameOverridden - In the implementation block
@property (assign,nonatomic) long long favoriteTime; 				//@synthesize _favoriteTime=__favoriteTime - In the implementation block
@property (assign,getter=isCapableVoiceCall,nonatomic) BOOL capableVoiceCall; 				//@synthesize _capableVoiceCall=__capableVoiceCall - In the implementation block
@property (assign,getter=isCapableVideoCall,nonatomic) BOOL capableVideoCall; 				//@synthesize _capableVideoCall=__capableVideoCall - In the implementation block
@property (assign,getter=isCapableMyhome,nonatomic) BOOL capableMyhome; 				//@synthesize _capableMyhome=__capableMyhome - In the implementation block
@property (assign,getter=isCapableBuddy,nonatomic) BOOL capableBuddy; 				//@synthesize _capableBuddy=__capableBuddy - In the implementation block
@property (assign,nonatomic) int attributes; 				//@synthesize _attributes=__attributes - In the implementation block
@property (assign,nonatomic) long long settings; 				//@synthesize _settings=__settings - In the implementation block
@property (nonatomic,retain) NSString* picturePath; 				//@synthesize _picturePath=__picturePath - In the implementation block
@property (nonatomic,retain) NSString* recommendParams; 				//@synthesize _recommendParams=__recommendParams - In the implementation block
@property (assign,nonatomic) int friendRequestStatus; 				//@synthesize _friendRequestStatus=__friendRequestStatus - In the implementation block
-(void)setMid:(id)arg1;
-(void)setPictureStatus:(id)arg1;
-(void)read:(id)arg1;
-(void)setCreatedTime:(long long)arg1;
-(void)setPicturePath:(id)arg1;
-(void)setRecommendParams:(id)arg1;
-(void)setThumbnailUrl:(id)arg1;
-(void)setCapableVideoCall:(BOOL)arg1;
-(void)setCapableBuddy:(BOOL)arg1;
-(void)setRelation:(int)arg1;
-(void)setDisplayNameOverridden:(id)arg1;
-(void)setFavoriteTime:(long long)arg1;
-(void)setCapableVoiceCall:(BOOL)arg1;
-(void)setCapableMyhome:(BOOL)arg1;
-(void)setFriendRequestStatus:(int)arg1;
-(void)setType:(int)arg1;
-(void)setSettings:(long long)arg1;
-(void)setAttributes:(int)arg1;
-(void)setStatus:(int)arg1;
-(void)setPhoneticName:(id)arg1;
-(void)setStatusMessage:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end