/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:04 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPListDescriptor : NSObject {
	struct RefPtr<spListDescriptor> _list_descriptor; 
}
@property (nonatomic,copy) struct ListDescriptor* cpp; 
@property (nonatomic,copy) int type; 
@property (nonatomic,copy) NSString* identifier; 
@property (nonatomic,copy) SPURL* link; 
@property (nonatomic,copy) SPListDescriptorSort* sortParams; 
@property (nonatomic,copy) SPListDescriptorFilter* filterParams; 
@property (nonatomic,copy) int shuffleSeed; 
@property (nonatomic,copy) struct _NSRange rangeParams; 
@property (nonatomic,copy) int version; 
@property (nonatomic,copy) SPListDescriptor* list; 
@property (nonatomic,copy) NSArray* concatenatedLists; 
+(id)listDescriptorWithLink:(id)arg1;
+(id)listDescriptorWithListDescriptor:(struct PassRefPtr<spListDescriptor>)arg1;
+(id)listDescriptorWithJSON:(id)arg1;
+(id)stringForType:(int)arg1;
-(id)initWithListDescriptor:(struct PassRefPtr<spListDescriptor>)arg1;
-(id)serializeToJSONString;
-(BOOL)isEqual:(id)arg1;
-(id)initWithType:(int)arg1;
-(id).cxx_construct;
-(void).cxx_destruct;
@end