/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:51 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AmazonElasticLoadBalancingClient : AmazonWebServiceClient {
}
-(id)initWithAccessKey:(id)arg1 withSecretKey:(id)arg2;
-(id)deleteLoadBalancerListeners:(id)arg1;
-(id)setLoadBalancerPoliciesOfListener:(id)arg1;
-(id)enableAvailabilityZonesForLoadBalancer:(id)arg1;
-(id)deregisterInstancesFromLoadBalancer:(id)arg1;
-(id)describeLoadBalancerPolicies:(id)arg1;
-(id)describeLoadBalancerPolicyTypes:(id)arg1;
-(id)setLoadBalancerListenerSSLCertificate:(id)arg1;
-(id)createLBCookieStickinessPolicy:(id)arg1;
-(id)deleteLoadBalancerPolicy:(id)arg1;
-(id)registerInstancesWithLoadBalancer:(id)arg1;
-(id)configureHealthCheck:(id)arg1;
-(id)describeLoadBalancers:(id)arg1;
-(id)describeInstanceHealth:(id)arg1;
-(id)attachLoadBalancerToSubnets:(id)arg1;
-(id)disableAvailabilityZonesForLoadBalancer:(id)arg1;
-(id)createLoadBalancerListeners:(id)arg1;
-(id)createLoadBalancerPolicy:(id)arg1;
-(id)setLoadBalancerPoliciesForBackendServer:(id)arg1;
-(id)detachLoadBalancerFromSubnets:(id)arg1;
-(id)applySecurityGroupsToLoadBalancer:(id)arg1;
-(id)deleteLoadBalancer:(id)arg1;
-(id)createLoadBalancer:(id)arg1;
-(id)createAppCookieStickinessPolicy:(id)arg1;
-(id)initWithCredentials:(id)arg1;
@end