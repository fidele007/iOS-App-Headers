/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:27 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingDeleteLoadBalancerListenersRequest : AmazonServiceRequestConfig {
	NSString* loadBalancerName; 
	NSMutableArray* loadBalancerPorts; 
}
@property (nonatomic,retain) NSString* loadBalancerName; 
@property (nonatomic,retain) NSMutableArray* loadBalancerPorts; 
-(void)setLoadBalancerPorts:(id)arg1;
-(id)initWithLoadBalancerName:(id)arg1 andLoadBalancerPorts:(id)arg2;
-(void)addLoadBalancerPort:(id)arg1;
-(void)setLoadBalancerName:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end