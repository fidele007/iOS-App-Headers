/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:00 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3InitiateMultipartUploadResponse : S3Response {
	S3MultipartUpload* multipartUpload; 
}
@property (nonatomic,copy) S3MultipartUpload* multipartUpload; 
-(void)processBody;
-(void)dealloc;
@end