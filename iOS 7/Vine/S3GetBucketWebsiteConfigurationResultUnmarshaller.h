/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:14 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3GetBucketWebsiteConfigurationResultUnmarshaller : AmazonUnmarshallerXMLParserDelegate {
	BucketWebsiteConfiguration* configuration; 
}
@property (nonatomic,copy) BucketWebsiteConfiguration* configuration; 
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)dealloc;
@end