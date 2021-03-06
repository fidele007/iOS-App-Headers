/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:42 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SBJsonWriter : NSObject {
	NSString* error; 
	unsigned maxDepth; 
	BOOL sortKeys; 
	BOOL humanReadable; 
}
@property (assign) unsigned maxDepth; 
@property (copy) NSString* error; 
@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
-(void)setHumanReadable:(BOOL)arg1;
-(void)setSortKeys:(BOOL)arg1;
-(id)dataWithObject:(id)arg1;
-(id)stringWithObject:(id)arg1 error:(id*)arg2;
-(id)stringWithObject:(id)arg1;
-(void)setError:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setMaxDepth:(unsigned)arg1;
@end