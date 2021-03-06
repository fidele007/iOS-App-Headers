/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:05 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface RegionPlaylistReply_RegionPlaylist : PBGeneratedMessage {
	unsigned int hasSubscribers_:1; 
	unsigned int hasUri_:1; 
	unsigned int hasName_:1; 
	unsigned int hasCreator_:1; 
	int subscribers; 
	NSString* uri; 
	NSString* name; 
	NSString* creator; 
}
@property (retain) NSString* uri; 
@property (assign) int subscribers; 
@property (retain) NSString* name; 
@property (retain) NSString* creator; 
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
-(BOOL)hasUri;
-(BOOL)hasCreator;
-(void)setHasUri:(BOOL)arg1;
-(void)setHasName:(BOOL)arg1;
-(void)setHasCreator:(BOOL)arg1;
-(void)setSubscribers:(int)arg1;
-(BOOL)hasSubscribers;
-(void)setHasSubscribers:(BOOL)arg1;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(void)setName:(id)arg1;
-(void)setUri:(id)arg1;
-(BOOL)hasName;
-(void)setCreator:(id)arg1;
@end