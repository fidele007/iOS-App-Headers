/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:16 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNAuthData : NSObject {
	NSString* _key; 
	NSString* _username; 
	NSString* _userId; 
}
@property (nonatomic,retain) NSString* key; 				//@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString* username; 				//@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString* userId; 				//@synthesize userId=_userId - In the implementation block
+(id)authDataWithJSON:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setKey:(id)arg1;
-(void)setUsername:(id)arg1;
-(void)setUserId:(id)arg1;
-(void).cxx_destruct;
@end