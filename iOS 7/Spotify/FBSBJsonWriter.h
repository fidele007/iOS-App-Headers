/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBSBJsonWriter.h>

@interface FBSBJsonWriter : FBSBJsonBase <FBSBJsonWriter> {
	BOOL sortKeys; 
	BOOL humanReadable; 
}
@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
+(void)initialize;
-(id)stringWithFragment:(id)arg1;
-(void)setHumanReadable:(BOOL)arg1;
-(void)setSortKeys:(BOOL)arg1;
-(BOOL)appendValue:(id)arg1 into:(id)arg2;
-(BOOL)appendDictionary:(id)arg1 into:(id)arg2;
-(BOOL)appendArray:(id)arg1 into:(id)arg2;
-(BOOL)appendString:(id)arg1 into:(id)arg2;
-(id)stringWithObject:(id)arg1;
-(id)indent;
@end