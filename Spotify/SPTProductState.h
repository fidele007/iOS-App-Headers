/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:23 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTProductState.h>

@interface SPTProductState : NSObject <SPTProductState> {
	struct shared_ptr<spotifycoreexperimentalschedulerScheduler> _scheduler; 
	struct shared_ptr<spotifycoreexperimentalproduct_stateProductState> _productState; 
	struct scoped_connection _productStateConnection; 
	NSMapTable* _observers; 
}
@property (nonatomic,retain) NSMapTable* observers; 				//@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) NSDictionary* values; 
@property (assign,nonatomic,__weak) NSDictionary* originalValues; 
@property (assign,nonatomic,__weak) NSDictionary* overrides; 
+(id)sta_productState;
-(void)addObserver:(id)arg1 on:(id)arg2;
-(id)sta_jsonFromObject:(id)arg1;
-(id)sta_values;
-(id)sta_originalValues;
-(id)sta_overrides;
-(id)initWithCoreProductState:(struct shared_ptr<spotifycoreexperimentalproduct_stateProductState>)arg1;
-(id)valuesDictFromMap:(struct rmap<std__1basic_string<char>, std__1basic_string<char>, std__1less<std__1basic_string<char> >, std__1allocator<std__1pair<const std__1basic_string<char>, std__1basic_string<char> > > >*)arg1;
-(struct map<std__1basic_string<char>, std__1basic_string<char>, std__1less<std__1basic_string<char> >, std__1allocator<std__1pair<const std__1basic_string<char>, std__1basic_string<char> > > >)mapFromValuesDict:(id)arg1;
-(void)setOriginalValues:(id)arg1;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1;
-(id)stringForKey:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id).cxx_construct;
-(void)setObservers:(id)arg1;
-(void)setOverrides:(id)arg1;
-(void).cxx_destruct;
@end