/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:23 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBAppBridgeTypeToJSONConverter : NSObject {
	NSMutableArray* _createdPasteboardNames; 
}
@property (nonatomic,retain) NSMutableArray* createdPasteboardNames; 				//@synthesize createdPasteboardNames=_createdPasteboardNames - In the implementation block
+(id)appBridgeTypeFromJSON:(id)arg1;
-(void)setCreatedPasteboardNames:(id)arg1;
-(id)convertedDictionaryFromDictionary:(id)arg1 convertingToJSON:(BOOL)arg2;
-(id)convertedArrayFromArray:(id)arg1 convertingToJSON:(BOOL)arg2;
-(id)jsonFromData:(id)arg1 tag:(id)arg2;
-(id)convertedObjectFromObject:(id)arg1 convertingToJSON:(BOOL)arg2;
-(id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1;
-(id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1;
-(void)dealloc;
@end