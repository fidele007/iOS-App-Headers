/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:06 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingDescribeLoadBalancerPolicyTypesRequest : AmazonServiceRequestConfig {
	NSMutableArray* policyTypeNames; 
}
@property (nonatomic,retain) NSMutableArray* policyTypeNames; 
-(void)addPolicyTypeName:(id)arg1;
-(void)setPolicyTypeNames:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end