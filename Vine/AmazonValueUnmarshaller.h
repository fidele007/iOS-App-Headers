/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:52 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AmazonValueUnmarshaller : AmazonServiceResponseUnmarshaller {
	NSString* value; 
	NSString* internalElementName; 
}
@property (nonatomic,retain) NSString* value; 
@property (nonatomic,retain) NSString* internalElementName; 
-(void)setInternalElementName:(id)arg1;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
-(void)dealloc;
-(void)setValue:(id)arg1;
@end