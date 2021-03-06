/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:26 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AmazonS3Client : AmazonWebServiceClient {
}
+(void)initializeResponseObjects;
+(id)constructResponseFromRequest:(id)arg1;
+(id)apiVersion;
-(id)putObject:(id)arg1;
-(id)invoke:(id)arg1;
-(id)createBucket:(id)arg1;
-(id)deleteBucket:(id)arg1;
-(id)listBuckets:(id)arg1;
-(id)listObjects:(id)arg1;
-(id)objectCopy:(id)arg1;
-(id)getPreSignedURL:(id)arg1 error:(id*)arg2;
-(id)signS3Request:(id)arg1;
-(id)partCopy:(id)arg1;
-(id)createBucketWithName:(id)arg1;
-(id)deleteBucketWithName:(id)arg1;
-(id)getBucketLocation:(id)arg1;
-(id)listBuckets;
-(id)listObjectsInBucket:(id)arg1;
-(id)getObjectMetadata:(id)arg1;
-(id)deleteObjectWithKey:(id)arg1 withBucket:(id)arg2;
-(id)copyObject:(id)arg1;
-(id)getACL:(id)arg1;
-(id)setACL:(id)arg1;
-(id)getBucketPolicy:(id)arg1;
-(id)setBucketPolicy:(id)arg1;
-(id)deleteBucketPolicy:(id)arg1;
-(id)getBucketVersioningConfiguration:(id)arg1;
-(id)setBucketVersioningConfiguration:(id)arg1;
-(id)setBucketWebsiteConfiguration:(id)arg1;
-(id)getBucketWebsiteConfiguration:(id)arg1;
-(id)deleteBucketWebsiteConfiguration:(id)arg1;
-(id)setBucketLifecycleConfiguration:(id)arg1;
-(id)getBucketLifecycleConfiguration:(id)arg1;
-(id)deleteBucketLifecycleConfiguration:(id)arg1;
-(id)setBucketTagging:(id)arg1;
-(id)getBucketTagging:(id)arg1;
-(id)deleteBucketTagging:(id)arg1;
-(id)setBucketCrossOrigin:(id)arg1;
-(id)getBucketCrossOrigin:(id)arg1;
-(id)deleteBucketCrossOrigin:(id)arg1;
-(id)deleteVersion:(id)arg1;
-(id)listVersions:(id)arg1;
-(id)getPreSignedURL:(id)arg1;
-(id)initiateMultipartUpload:(id)arg1;
-(id)copyPart:(id)arg1;
-(id)initiateMultipartUploadWithKey:(id)arg1 withBucket:(id)arg2;
-(id)abortMultipartUpload:(id)arg1;
-(id)listMultipartUploads:(id)arg1;
-(id)uploadPart:(id)arg1;
-(id)listParts:(id)arg1;
-(id)completeMultipartUpload:(id)arg1;
-(id)restoreObject:(id)arg1;
-(id)serviceEndpoint;
-(void)dealloc;
-(id)init;
-(id)deleteObjects:(id)arg1;
-(id)getObject:(id)arg1;
-(id)deleteObject:(id)arg1;
@end