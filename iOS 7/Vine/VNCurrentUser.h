/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:35 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNCurrentUser : NSObject {
	VNFile* _avatarFile; 
	VNUser* _user; 
}
@property (nonatomic,retain) VNFile* avatarFile; 				//@synthesize avatarFile=_avatarFile - In the implementation block
@property (nonatomic,retain) VNUser* user; 				//@synthesize user=_user - In the implementation block
+(id)sharedInstance;
-(void)setAvatarFile:(id)arg1;
-(void)setUser:(id)arg1;
-(id)init;
-(void)reset;
-(void).cxx_destruct;
@end