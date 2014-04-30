/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:31 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SimpleDBDomainMetadataResponse : SimpleDBResponse {
	NSNumber* itemCount; 
	NSNumber* itemNamesSizeBytes; 
	NSNumber* attributeNameCount; 
	NSNumber* attributeNamesSizeBytes; 
	NSNumber* attributeValueCount; 
	NSNumber* attributeValuesSizeBytes; 
	NSNumber* timestamp; 
}
@property (nonatomic,retain) NSNumber* itemCount; 
@property (nonatomic,retain) NSNumber* itemNamesSizeBytes; 
@property (nonatomic,retain) NSNumber* attributeNameCount; 
@property (nonatomic,retain) NSNumber* attributeNamesSizeBytes; 
@property (nonatomic,retain) NSNumber* attributeValueCount; 
@property (nonatomic,retain) NSNumber* attributeValuesSizeBytes; 
@property (nonatomic,retain) NSNumber* timestamp; 
-(void)setItemNamesSizeBytes:(id)arg1;
-(void)setAttributeNameCount:(id)arg1;
-(void)setAttributeNamesSizeBytes:(id)arg1;
-(void)setAttributeValueCount:(id)arg1;
-(void)setAttributeValuesSizeBytes:(id)arg1;
-(void)setItemCount:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTimestamp:(id)arg1;
-(void)setException:(id)arg1;
@end