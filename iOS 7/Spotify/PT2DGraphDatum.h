/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:59 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PT2DGraphDatum.h>

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum> {
	UIColor* _color; 
	CGPoint _graphPoint; 
}
@property (assign,nonatomic) CGPoint graphPoint; 				//@synthesize graphPoint=_graphPoint - In the implementation block
@property (nonatomic,retain) UIColor* color; 				//@synthesize color=_color - In the implementation block
+(id)datumWithPoint:(CGPoint)arg1;
-(void)setColor:(id)arg1;
-(void)setGraphPoint:(CGPoint)arg1;
-(void).cxx_destruct;
@end