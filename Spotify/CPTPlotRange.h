/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:10 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>
#import <NSCopying.h>
#import <NSMutableCopying.h>

@interface CPTPlotRange : NSObject <NSCoding, NSCopying, NSMutableCopying> {
	=exponentblengthbisNegativebisCompactbreservedbmantissaS[=8411188] location; 
	=exponentblengthbisNegativebisCompactbreservedbmantissaS[=8411188] length; 
	double locationDouble; 
	double lengthDouble; 
}
@property (assign,nonatomic) =bbbbbS[=8411188] location; 
@property (assign,nonatomic) =bbbbbS[=8411188] length; 
@property (nonatomic,@dynamic,copy) =bbbbbS[=8411188] end; 
@property (nonatomic,copy) double locationDouble; 
@property (nonatomic,copy) double lengthDouble; 
@property (nonatomic,@dynamic,copy) double endDouble; 
@property (nonatomic,@dynamic,copy) =bbbbbS[=8411188] minLimit; 
@property (nonatomic,@dynamic,copy) =bbbbbS[=8411188] midPoint; 
@property (nonatomic,@dynamic,copy) =bbbbbS[=8411188] maxLimit; 
@property (nonatomic,@dynamic,copy) double minLimitDouble; 
@property (nonatomic,@dynamic,copy) double midPointDouble; 
@property (nonatomic,@dynamic,copy) double maxLimitDouble; 
+(id)plotRangeWithLocation:(=bbbbbS[=8411188])arg1 length:(=bbbbbS[=8411188])arg2;
-(int)compareToDouble:(double)arg1;
-(int)compareToDecimal:(=bbbbbS[=8411188])arg1;
-(BOOL)containsDouble:(double)arg1;
-(BOOL)isEqualToRange:(id)arg1;
-(int)compareToNumber:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setLength:(=bbbbbS[=8411188])arg1;
-(BOOL)containsRange:(id)arg1;
-(id)mutableCopyWithZone:(NSZone*)arg1;
-(id)initWithLocation:(=bbbbbS[=8411188])arg1 length:(=bbbbbS[=8411188])arg2;
-(BOOL)intersectsRange:(id)arg1;
-(BOOL)contains:(=bbbbbS[=8411188])arg1;
-(void)setLocation:(=bbbbbS[=8411188])arg1;
@end