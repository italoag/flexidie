//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface IRURun : NSObject
{
}

+ (void)onMainThread:(id)arg1;
+ (void)onDataThreadBlockUI:(id)arg1;
+ (void)onDataThreadBlockUI:(id)arg1 completion:(id)arg2;
+ (void)onDataThread:(id)arg1 result:(id)arg2;
+ (void)onDataThread:(id)arg1;
+ (void)onDataThread:(id)arg1 completion:(id)arg2;
+ (void)onDataThread:(id)arg1 result:(id)arg2 blockUI:(_Bool)arg3;
+ (_Bool)isOtherThread;
+ (_Bool)isDataThread;
+ (_Bool)isMainThread;
+ (void)initialize;

@end

