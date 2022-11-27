function [LA,LL] = Forward_Kinematics_p(qFlexion,qKnee)
    % qFlexion: Associated with Hip Pitch Motor
    % qKnee: Associated with Knee Motor
    % Leg Length defined as length from hip pitch to toe joint
    % Leg Angle defined as the angle of the projection of leg vector onto
    % sagital plane with respect to the verticle line
    t2 = qKnee+7.0./2.0e2;
    t3 = cos(t2);
    t4 = t3.*5.292e-1;
    t5 = t4+5.300526400000001e-1;
    LA = qFlexion-acos(1.0./sqrt(t5).*(t4+5.601052800000001e-1).*9.44822373393802e-1)+1.0./1.0e1;
    if nargout > 1
        LL = sqrt(t5);
    end
end