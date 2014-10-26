/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:27 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingDetachLoadBalancerFromSubnetsRequest : AmazonServiceRequestConfig {
	NSString* loadBalancerName; 
	NSMutableArray* subnets; 
}
@property (nonatomic,retain) NSString* loadBalancerName; 
@property (nonatomic,retain) NSMutableArray* subnets; 
-(void)addSubnet:(id)arg1;
-(void)setLoadBalancerName:(id)arg1;
-(void)setSubnets:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end