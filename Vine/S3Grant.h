/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:05 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3Grant : NSObject {
	S3Grantee* grantee; 
	S3Permission* permission; 
}
@property (nonatomic,retain) S3Grantee* grantee; 
@property (nonatomic,retain) S3Permission* permission; 
+(id)grantWithGrantee:(id)arg1 withPermission:(id)arg2;
-(id)toXml;
-(id)initWithGrantee:(id)arg1 withPermission:(id)arg2;
-(void)setPermission:(id)arg1;
-(void)setGrantee:(id)arg1;
-(void)dealloc;
@end