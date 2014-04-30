/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:24 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>
#import <NSCopying.h>

@interface CPTConstraints : NSObject <NSCoding, NSCopying> {
}
+(id)constraintWithLowerOffset:(float)arg1;
+(id)constraintWithUpperOffset:(float)arg1;
+(id)constraintWithRelativeOffset:(float)arg1;
-(id)initWithLowerOffset:(float)arg1;
-(id)initWithUpperOffset:(float)arg1;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2;
-(BOOL)isEqualToConstraint:(id)arg1;
-(id)initWithRelativeOffset:(float)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1;
@end