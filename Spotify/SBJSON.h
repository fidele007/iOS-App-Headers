/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:06 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SBJsonParser.h>
#import <SBJsonWriter.h>

@interface SBJSON : SBJsonBase <SBJsonParser, SBJsonWriter> {
	SBJsonParser* jsonParser; 
	SBJsonWriter* jsonWriter; 
}
@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
-(id)objectWithString:(id)arg1;
-(id)stringWithObject:(id)arg1 allowScalar:(BOOL)arg2 error:(id*)arg3;
-(id)objectWithString:(id)arg1 allowScalar:(BOOL)arg2 error:(id*)arg3;
-(void)setHumanReadable:(BOOL)arg1;
-(void)setSortKeys:(BOOL)arg1;
-(id)stringWithFragment:(id)arg1 error:(id*)arg2;
-(id)stringWithObject:(id)arg1 error:(id*)arg2;
-(id)fragmentWithString:(id)arg1 error:(id*)arg2;
-(id)stringWithObject:(id)arg1;
-(id)objectWithString:(id)arg1 error:(id*)arg2;
-(void)dealloc;
-(id)init;
-(unsigned)maxDepth;
-(void)setMaxDepth:(unsigned)arg1;
@end