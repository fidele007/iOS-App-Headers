/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:06 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface CPTColorSpace : NSObject <NSCoding> {
	struct CGColorSpace* cgColorSpace; 
}
@property (assign,nonatomic) struct CGColorSpace* cgColorSpace; 
+(id)genericRGBSpace;
-(id)initWithCGColorSpace:(struct CGColorSpace*)arg1;
-(void)setCGColorSpace:(struct CGColorSpace*)arg1;
-(void)setCgColorSpace:(struct CGColorSpace*)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)finalize;
@end