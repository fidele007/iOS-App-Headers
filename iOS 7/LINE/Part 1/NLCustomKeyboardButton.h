/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:24 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SticonImageComponentDelegate.h>

@interface NLCustomKeyboardButton : UIButton <SticonImageComponentDelegate> {
	unsigned _PKG_CODE; 
	unsigned _CODE; 
}
@property (assign,nonatomic) unsigned PKG_CODE; 				//@synthesize PKG_CODE=_PKG_CODE - In the implementation block
@property (assign,nonatomic) unsigned CODE; 				//@synthesize CODE=_CODE - In the implementation block
-(unsigned)sticonPKG_CODE;
-(unsigned)sticonCODE;
-(void)sticonDrawImage:(id)arg1 PKG_CODE:(unsigned)arg2 CODE:(unsigned)arg3;
-(void)setImageForSticon:(unsigned)arg1 CODE:(unsigned)arg2;
-(void)setPKG_CODE:(unsigned)arg1;
-(void)setCODE:(unsigned)arg1;
-(void)dealloc;
@end