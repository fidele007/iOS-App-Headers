/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:14 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3GetBucketTaggingResponse : S3Response {
	S3BucketTaggingConfiguration* configuration; 
}
@property (nonatomic,retain) S3BucketTaggingConfiguration* configuration; 
-(void)processBody;
-(void)setConfiguration:(id)arg1;
@end