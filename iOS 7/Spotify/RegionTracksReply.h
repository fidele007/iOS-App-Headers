/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:42 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface RegionTracksReply : PBGeneratedMessage {
	PBAppendableArray* tracksArray; 
}
@property (@dynamic,copy) PBArray* tracks; 
@property (retain) PBAppendableArray* tracksArray; 
+(id)builder;
+(id)builderWithPrototype:(id)arg1;
+(id)parseFromData:(id)arg1;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+(id)parseFromInputStream:(id)arg1;
+(id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+(id)parseFromCodedInputStream:(id)arg1;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+(id)defaultInstance;
+(void)initialize;
-(id)builder;
-(BOOL)isInitialized;
-(void)writeToCodedOutputStream:(id)arg1;
-(int)serializedSize;
-(void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
-(id)toBuilder;
-(void)setTracksArray:(id)arg1;
-(id)tracksAtIndex:(unsigned)arg1;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
@end