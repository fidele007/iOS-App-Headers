/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:44 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPSessionResponse : SPResponse {
}
@property (nonatomic,retain) NSError* error; 				//@synthesize error=_error - In the implementation block
-(BOOL)handleErrorUnlessSuccessCode:(int)arg1;
-(SEL)resultParserSelector;
-(void)setError:(id)arg1;
-(void)dealloc;
@end