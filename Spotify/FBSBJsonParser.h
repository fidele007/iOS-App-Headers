/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:13 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBSBJsonParser.h>

@interface FBSBJsonParser : FBSBJsonBase <FBSBJsonParser> {
	r* c; 
}
+(void)initialize;
-(id)objectWithString:(id)arg1;
-(BOOL)scanValue:(id*)arg1;
-(BOOL)scanIsAtEnd;
-(id)fragmentWithString:(id)arg1;
-(BOOL)scanRestOfDictionary:(id*)arg1;
-(BOOL)scanRestOfArray:(id*)arg1;
-(BOOL)scanRestOfString:(id*)arg1;
-(BOOL)scanRestOfFalse:(id*)arg1;
-(BOOL)scanRestOfTrue:(id*)arg1;
-(BOOL)scanRestOfNull:(id*)arg1;
-(BOOL)scanNumber:(id*)arg1;
-(BOOL)scanUnicodeChar:(unsigned short*)arg1;
-(BOOL)scanHexQuad:(unsigned short*)arg1;
@end