/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:37 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNTwitterData : NSObject {
	NSString* _oauthToken; 
	NSString* _oauthSecret; 
	NSString* _userId; 
}
@property (nonatomic,retain) NSString* oauthToken; 				//@synthesize oauthToken=_oauthToken - In the implementation block
@property (nonatomic,retain) NSString* oauthSecret; 				//@synthesize oauthSecret=_oauthSecret - In the implementation block
@property (nonatomic,retain) NSString* userId; 				//@synthesize userId=_userId - In the implementation block
+(id)clearJSON;
+(id)data;
-(id)initWithJSON:(id)arg1;
-(id)json;
-(void)setOauthSecret:(id)arg1;
-(void)save;
-(void)load;
-(void)clear;
-(void)setOauthToken:(id)arg1;
-(void)setUserId:(id)arg1;
-(void).cxx_destruct;
@end