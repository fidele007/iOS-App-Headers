/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:47 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBCacheEntityInfo : NSObject {
	NSString* _uuid; 
	NSString* _key; 
	double _accessTime; 
	unsigned _fileSize; 
	BOOL _dirty; 
}
@property (copy) NSString* key; 				//@synthesize key=_key - In the implementation block
@property (copy) NSString* uuid; 				//@synthesize uuid=_uuid - In the implementation block
@property (copy) double accessTime; 				//@synthesize accessTime=_accessTime - In the implementation block
@property (copy) unsigned fileSize; 				//@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDirty) BOOL dirty; 				//@synthesize dirty=_dirty - In the implementation block
-(void)registerAccess;
-(id)initWithKey:(id)arg1 uuid:(id)arg2 accessTime:(double)arg3 fileSize:(unsigned)arg4;
-(void)dealloc;
-(void)setDirty:(BOOL)arg1;
@end