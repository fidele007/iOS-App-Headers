/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:06 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3SetBucketPolicyRequest : S3Request {
	S3BucketPolicy* policy; 
}
@property (nonatomic,retain) S3BucketPolicy* policy; 
-(void)setPolicy:(id)arg1;
-(id)configureURLRequest;
-(void)dealloc;
@end