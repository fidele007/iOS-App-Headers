/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:05 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3BucketUnmarshaller : AmazonUnmarshallerXMLParserDelegate {
	S3Bucket* bucket; 
}
@property (nonatomic,copy) S3Bucket* bucket; 
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)dealloc;
@end